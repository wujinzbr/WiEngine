package com.wiyun.engine.nodes;

import com.wiyun.engine.opengl.Texture2D;
import com.wiyun.engine.types.WYColor3B;
import com.wiyun.engine.types.WYRect;
import com.wiyun.engine.utils.TargetSelector;

/**
 * <p>按钮节点</p>
 * 
 * <p>按钮缺省打开了touch enabled设置, 要注意的是: 如果只是想临时禁止触摸事件处理, 使用
 * setEnabled(false)会比较好. 如果使用setTouchEnabled(false), 再使用setTouchEnabled(true)
 * 打开事件, 则会使触摸事件重定向到java层, 这会使Button点击时无反应.</p>
 * 
 * <p>一个按钮有三个状态: 普通, 按下和禁止. 普通状态是必须要指定的, 其它
 * 两个状态可以没有. 这三个状态分别由三个\link Node Node\endlink 节点对象代表,
 * 因此按钮可以很灵活的由各种节点组成. 三个状态节点和按钮之间没有父子关系, 但是不影响
 * 这三个状态节点接收事件, 因为按钮在onEnter和onExit发生时也会调用它们的相应方法</p>
 */
public class Button extends Node {
	/**
     * 创建按钮实例
     * 
     * @param normalSprite 正常状态图片，不能为null
     * @param selectedSprite 选择状态图片，为null表示不渲染选择状态
     * @param disabledSprite 禁止状态图片，为null表示不渲染禁止状态
     * @param focusedSprite 焦点状态图片，为null表示不渲染焦点状态
     * @return 按钮实例
     */
    public static Button make(Node normalSprite, Node selectedSprite, Node disabledSprite, Node focusedSprite) {
        return new Button(normalSprite, selectedSprite, disabledSprite, focusedSprite, null);
    }
    
    /**
     * 创建按钮实例
     * 
     * @param normalSprite 正常状态图片，不能为null
     * @param selectedSprite 选择状态图片，为null表示不渲染选择状态
     * @param disabledSprite 禁止状态图片，为null表示不渲染禁止状态
     * @param focusedSprite 焦点状态图片，为null表示不渲染焦点状态
     * @param target 回调函数所属对象。可以是null，表示不处理ACTION_UP
     * @param selector 回调函数名称，通过这种方式指定的回调函数必须是public，且无参数。可以是null，表示不处理ACTION_UP
     * @return 按钮实例
     */
    public static Button make(Node normalSprite, Node selectedSprite, Node disabledSprite, Node focusedSprite, Node target, String selector) {
        return new Button(normalSprite, selectedSprite, disabledSprite, focusedSprite, new TargetSelector(target, selector, null));
    }
    
    /**
     * 创建按钮实例
     * 
     * @param normalSprite 正常状态图片，不能为null
     * @param selectedSprite 选择状态图片，为null表示不渲染选择状态
     * @param disabledSprite 禁止状态图片，为null表示不渲染禁止状态
     * @param focusedSprite 焦点状态图片，为null表示不渲染焦点状态
     * @param selector ACTION_UP时的回调函数选择子，必须是public方法，参数不限。可以是null，表示不处理ACTION_UP
     * @return 按钮实例
     */
    public static Button make(Node normalSprite, Node selectedSprite, Node disabledSprite, Node focusedSprite, TargetSelector selector) {
    	return new Button(normalSprite, selectedSprite, disabledSprite, focusedSprite, selector);
    }
    
    /**
     * 创建按钮实例
     * 
     * @param normalSprite 正常状态图片，不能为null
     * @param selectedSprite 选择状态图片，为null表示不渲染选择状态
     * @param disabledSprite 禁止状态图片，为null表示不渲染禁止状态
     * @param focusedSprite 焦点状态图片，为null表示不渲染焦点状态
     * @param downSelector ACTION_DOWN时的回调函数选择子，必须是public方法，参数不限。可以是null，表示不处理ACTION_DOWN
     * @param upSelector ACTION_UP时的回调函数选择子，必须是public方法，参数不限。可以是null，表示不处理ACTION_UP
     * @return 按钮实例
     */
    public static Button make(Node normalSprite, Node selectedSprite, Node disabledSprite, Node focusedSprite, TargetSelector downSelector, TargetSelector upSelector) {
    	return new Button(normalSprite, selectedSprite, disabledSprite, focusedSprite, downSelector, upSelector);
    }
    
    /**
     * 创建按钮实例
     * 
     * @param normalResId 正常状态图片资源id，该参数不能为0
     * @param selectedResId 选择状态图片资源id，可以为0表示不渲染选择状态
     * @param target 回调函数所属对象。可以是null，表示不处理ACTION_UP
     * @param selector 回调函数名称，通过这种方式指定的回调函数必须是public，且无参数。可以是null，表示不处理ACTION_UP
     * @return 按钮实例
     */
    public static Button make(int normalResId, int selectedResId, Node target, String selector) {
        return make(normalResId, selectedResId, 0, 0, target, selector);
    }
    
    /**
     * 创建按钮实例，通过资源id的方式，为0表示没有相关状态
     * 
     * @param normalResId 正常状态图片资源id，该参数不能为0
     * @param selectedResId 选择状态图片资源id，可以为0表示不渲染选择状态
     * @param disabledResId 禁止状态图片资源id，可以为0表示不渲染禁止状态
     * @param focusedResId 焦点状态图片资源id，可以为0表示不渲染焦点状态
     * @return 按钮实例
     */
    public static Button make(int normalResId, int selectedResId, int disabledResId, int focusedResId) {
        return new Button((Sprite)Sprite.make(normalResId).autoRelease(), 
            	(selectedResId == 0) ? null : (Sprite)Sprite.make(selectedResId).autoRelease(),
                (disabledResId == 0) ? null : (Sprite)Sprite.make(disabledResId).autoRelease(), 
                (focusedResId == 0) ? null : (Sprite)Sprite.make(focusedResId).autoRelease(),
                null, 
                null);
    }
    
    /**
     * 创建按钮实例，通过资源id的方式，为0表示没有相关状态
     * 
     * @param normalResId 正常状态图片资源id，该参数不能为0
     * @param selectedResId 选择状态图片资源id，可以为0表示不渲染选择状态
     * @param disabledResId 禁止状态图片资源id，可以为0表示不渲染禁止状态
     * @param focusedResId 焦点状态图片资源id，可以为0表示不渲染焦点状态
     * @param target 回调函数所属对象。可以是null，表示不处理ACTION_UP
     * @param selector ACTION_UP时的回调函数选择子，必须是public方法，参数不限。可以是null，表示不处理ACTION_UP
     * @return 按钮实例
     */
    public static Button make(int normalResId, int selectedResId, int disabledResId, int focusedResId, Node target, String selector) {
        return new Button((Sprite)Sprite.make(normalResId).autoRelease(), 
        	(selectedResId == 0) ? null : (Sprite)Sprite.make(selectedResId).autoRelease(),
        	(disabledResId == 0) ? null : (Sprite)Sprite.make(disabledResId).autoRelease(), 
        	(focusedResId == 0) ? null : (Sprite)Sprite.make(focusedResId).autoRelease(), 
        	new TargetSelector(target, selector, null));
    }
    
    /**
     * 创建按钮实例，通过资源id的方式，为0表示没有相关状态
     * 
     * @param normalResId 正常状态图片资源id，该参数不能为0
     * @param selectedResId 选择状态图片资源id，可以为0表示不渲染选择状态
     * @param disabledResId 禁止状态图片资源id，可以为0表示不渲染禁止状态
     * @param focusedResId 焦点状态图片资源id，可以为0表示不渲染焦点状态
     * @param selector ACTION_UP时的回调函数选择子，必须是public方法，参数不限。可以是null，表示不处理ACTION_UP
     * @return 按钮实例
     */
    public static Button make(int normalResId, int selectedResId, int disabledResId, int focusedResId, TargetSelector selector) {
    	return new Button((Sprite)Sprite.make(normalResId).autoRelease(), 
    		(selectedResId == 0) ? null : (Sprite)Sprite.make(selectedResId).autoRelease(),
    		(disabledResId == 0) ? null : (Sprite)Sprite.make(disabledResId).autoRelease(),
    		(focusedResId == 0) ? null : (Sprite)Sprite.make(focusedResId).autoRelease(),
			selector);
    }
    
    /**
     * 创建按钮实例，通过资源id的方式，为0表示没有相关状态
     * 
     * @param normalResId 正常状态图片资源id，该参数不能为0
     * @param selectedResId 选择状态图片资源id，可以为0表示不渲染选择状态
     * @param disabledResId 禁止状态图片资源id，可以为0表示不渲染禁止状态
     * @param focusedResId 焦点状态图片资源id，可以为0表示不渲染焦点状态
     * @param downSelector ACTION_DOWN时的回调函数选择子，必须是public方法，参数不限。可以是null，表示不处理ACTION_DOWN
     * @param upSelector ACTION_UP时的回调函数选择子，必须是public方法，参数不限。可以是null，表示不处理ACTION_UP
     * @return 按钮实例
     */
    public static Button make(int normalResId, int selectedResId, int disabledResId, int focusedResId, TargetSelector downSelector, TargetSelector upSelector) {
    	return new Button((Sprite)Sprite.make(normalResId).autoRelease(), 
    		(selectedResId == 0) ? null : (Sprite)Sprite.make(selectedResId),
    		(disabledResId == 0) ? null : (Sprite)Sprite.make(disabledResId).autoRelease(),
    		(focusedResId == 0) ? null : (Sprite)Sprite.make(focusedResId).autoRelease(), 
			downSelector, 
			upSelector);
    }
    
    /**
     * 构造函数
     * 
     * @param normalSprite 正常状态图片
     * @param selectedSprite 选择状态图片，可以为null
     * @param disabledSprite 禁止状态图片，可以为null
     * @param focusedSprite 焦点状态图片, 可以为null
     * @param selector ACTION_UP时的回调函数选择子，必须是public方法，参数不限。可以是null，表示不处理ACTION_UP
     */
    protected Button(Node normalSprite, Node selectedSprite, Node disabledSprite, Node focusedSprite, TargetSelector selector) {
    	nativeInit(normalSprite, selectedSprite, disabledSprite, focusedSprite, null, selector);
	}
    
    /**
     * 构造函数
     * 
     * @param normalSprite 正常状态图片
     * @param selectedSprite 选择状态图片，可以为null
     * @param disabledSprite 禁止状态图片，可以为null
     * @param focusedSprite 焦点状态图片, 可以为null
     * @param downSelector ACTION_DOWN时的回调函数选择子，必须是public方法，参数不限。可以是null，表示不处理ACTION_DOWN
     * @param upSelector ACTION_UP时的回调函数选择子，必须是public方法，参数不限。可以是null，表示不处理ACTION_UP
     */
    protected Button(Node normalSprite, Node selectedSprite, Node disabledSprite, Node focusedSprite, TargetSelector downSelector, TargetSelector upSelector) {
    	nativeInit(normalSprite, selectedSprite, disabledSprite, focusedSprite, downSelector, upSelector);
	}
    
    /**
     * 从底层指针获得一个Button的Java对象
     * 
     * @param pointer 底层指针
     * @return {@link Button}
     */
    public static Button from(int pointer) {
    	return pointer == 0 ? null : new Button(pointer);
    }
    
    protected Button(int pointer) {
    	super(pointer);
    }
    
    @Override
    protected void doNativeInit() {
    }
    
    private native void nativeInit(Node normalSprite, Node selectedSprite, Node disabledSprite, Node focusedSprite, TargetSelector downSelector, TargetSelector upSelector);
    
    public native int getAlpha();

    public native void setAlpha(int alpha);
    
	/**
	 * \if English
	 * to set the corresponding state's texture through one single call
	 *
	 * @param normal \link Texture2D Texture2D\endlink, the normal state won't change if this value is NULL
	 * @param selected \link Texture2D Texture2D\endlink, the selected state won't change if this value is NULL
	 * @param disabled \link Texture2D Texture2D\endlink, the disabled state won't change if this value is NULL
	 * @param focused \link Texture2D Texture2D\endlink, the focused state won't change if this value is NULL
	 * \else
	 * 改变按钮的图片, 方便于一次修改按钮的图片
	 *
	 * @param normal 正常状态的贴图, 为NULL则不更新贴图
	 * @param selected 按下状态的贴图, 为NULL则不更新贴图
	 * @param disabled 禁止状态的贴图, 为NULL则不更新贴图
	 * @param focused  获得焦点状态的贴图, 为NULL则不更新贴图
	 * \endif
	 */
    public native void setTexture(Texture2D normal, Texture2D selected, Texture2D disabled, Texture2D focused);
    
	/**
	 * \if English
	 * Set texture rect of button state node. But not all node has setTextureRect method so only
	 * \link wyTextureNode wyTextureNode\endlink and \link wySpriteEx wySpriteEx\endlink support this usage.
	 *
	 * @param normalRect texture rect of normal state
	 * @param selectedRect texture rect of selected state
	 * @param disabledRect texture rect of disabled state
	 * @param focusedRect texture rect of focused state
	 * \else
	 * 修改按钮节点的贴图矩形, 如果按钮的贴图来自于一个图片集, 则可以使用这个方法修改按钮贴图. 但是并不是所有的节点都有
	 * setTextureRect方法, 因此这个用法只对\link wyTextureNode wyTextureNode\endlink和\link wySpriteEx wySpriteEx\endlink
	 * 有效
	 *
	 * @param normalRect 正常态的贴图矩形
	 * @param selectedRect 选择态的贴图矩形
	 * @param disabledRect 禁止态的贴图矩形
	 * @param focusedRect 焦点态的贴图矩形
	 * \endif
	 */
	public native void setTextureRect(WYRect normalRect, WYRect selectedRect, WYRect disabledRect, WYRect focusedRect);
	
	public WYColor3B getColor() {
		WYColor3B color = new WYColor3B();
		nativeGetColor(color);
		return color;
	}
	
	private native void nativeGetColor(WYColor3B color);
	
	public void setColor(WYColor3B color) {
		nativeSetColor(color.r, color.g, color.b);
	}
	
	private native void nativeSetColor(int r, int g, int b);
	
	/**
	 * 设置被点击时候的缩放比
	 *
	 * @param scale 被点击时候的缩放比
	 */
	public native void setClickScale(float scale);

	/**
	 * 得到被点击时候的缩放比
	 *
	 * @return 被点击时候的缩放比
	 */
	public native float getClickScale();
}
