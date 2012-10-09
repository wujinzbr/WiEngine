package com.wiyun.engine.nodes;

import com.wiyun.engine.utils.TargetSelector;

/**
 * 菜单项 
 */
public abstract class MenuItem extends Node {
    /**
     * 缺省菜单字体大小，单位是SP
     */
    public static final int DEFAULT_FONT_SIZE = 32;
    
    /**
     * 缺省菜单字体名称
     */
    public static final String DEFAULT_FONT_NAME = "DroidSans";

    protected MenuItem() {
    }
    
    /**
     * 构造函数
     * 
     * @param selector {@link TargetSelector}，将在ACTION_UP发生时被调用。回调方法必须是public方法，参数不限。
     */
    protected MenuItem(TargetSelector selector) {
    }
    
    /**
     * 构造函数
     * 
     * @param downSelector {@link TargetSelector}对象，将在ACTION_DOWN发生时被调用。回调方法必须是public方法，参数不限。
     * @param upSelector {@link TargetSelector}对象，将在ACTION_UP发生时被调用。回调方法必须是public方法，参数不限。
     */
    protected MenuItem(TargetSelector downSelector, TargetSelector upSelector) {
    }
    
    protected MenuItem(int pointer) {
    	super(pointer);
    }
    
    @Override
    protected void doNativeInit() {
    }
    
	/**
	 * \if English
	 * set the scale rate, default value is 1.4f
	 * \else
	 * 设置被点击时候的缩放比, 缺省的缩放比是1.4f
	 * \endif
	 */
	public native float getClickScale();

	/**
	 * \if English
	 * get the scale rate, default value is 1.4f
	 * \else
	 * 得到被点击时候的缩放比, 缺省的缩放比是1.4f
	 * \endif
	 */
	public native void setClickScale(float clickScale);
}