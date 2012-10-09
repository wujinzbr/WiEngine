package com.wiyun.engine.chipmunk;

import com.wiyun.engine.BaseWYObject;
import com.wiyun.engine.opengl.Texture2D;

/**
 * 用于在物体上播放一个动画，如果动画的帧大小不一样，这个物体的大小也会变化，不过
 * ShapeAnimation并不会在空间的step中进行，所以是安全的 
 */
public class ShapeAnimation extends BaseWYObject {
	/**
	 * 可以获得动画结束事件的接口定义 
	 */
	public static interface Callback {
		/**
		 * 在动画结束时调用
		 * 
		 * @param shapePointer Shape底层结构指针
		 */
		public void onAnimationEnd(int shapePointer);
		
		/**
		 * 如果调用stop时，动画还未停止，这将调用此回调方法
		 * 
		 * @param shapePointer Shape底层结构指针
		 */
		public void onAnimationAborted(int shapePointer);
	}
	
	/**
	 * 创建一个物体动画
	 * 
	 * @param duration 每帧的显示时间
	 * @param resIds 帧图片的资源id
	 * @return {@link ShapeAnimation}
	 */
	public static ShapeAnimation make(float duration, int... resIds) {
		return new ShapeAnimation(duration, resIds);
	}
	
	public static ShapeAnimation from(int pointer) {
		return pointer == 0 ? null : new ShapeAnimation(pointer);
	}
	
	/**
	 * 构造函数
	 * 
	 * @param duration 每帧的显示时间
	 * @param resIds 帧图片的资源id
	 */
	protected ShapeAnimation(float duration, int... resIds) {
		nativeInit();
		
		for(int id : resIds) {
			addFrame(duration, id);
		}
	}
	
	private native void nativeInit();
	
	protected ShapeAnimation(int pointer) {
		super(pointer);
	}

	/**
	 * 添加一帧
	 * 
	 * @param duration 帧的显示时间
	 * @param resId 帧图片资源id
	 */
	public void addFrame(float duration, int resId) {
		Texture2D tex = (Texture2D)Texture2D.makePNG(resId).autoRelease();
		nativeAddFrame(duration, tex);
	}
	
	private native void nativeAddFrame(float duration, Texture2D tex);

	/**
	 * 对某个物体进行动画播放
	 * 
	 * @param shape {@link Shape}
	 */
	public native void start(Shape shape);
	
	/**
	 * 强行停止动画，如果动画还未停止，会造成onAnimationAborted回调
	 * 被调用。这个方法不是线程安全的，如果不是在OpenGL线程中调用，
	 * 要注意同步问题
	 */
	public native void stop();
	
	public native boolean isLoop();

	public native void setLoop(boolean loop);

	public native float getDuration();

	public native void setDuration(float duration);

	public native void setCallback(Callback callback);

	public native boolean isAutoSize();

	public native void setAutoSize(boolean autoSize);
}
