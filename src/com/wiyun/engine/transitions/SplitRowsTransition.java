package com.wiyun.engine.transitions;

import com.wiyun.engine.nodes.Scene;

/**
 * 旧场景被分割层若干行，交错移出屏幕
 */
public class SplitRowsTransition extends TransitionScene {
	/**
	 * 静态构造函数
	 *
	 * @param duration 场景切换的时间
	 * @param inScene 准备载入的\link Scene Scene对象指针\endlink. 如果不为NULL, 则
	 * 		载出场景自动设置为当前场景. 如果为NULL, 则载入场景和载出场景都不设置. 需要在之后再
	 * 		自行设置. 一般如果是想在popScene的时候, 需要把这个参数设置为NULL, 这样\link Director Director\endlink
	 * 		会自动设置载入和载出场景.
	 * @param rows 行数
	 * @return {@link SplitRowsTransition}
	 */
	public static SplitRowsTransition make(float duration, Scene inScene, int rows) {
		return new SplitRowsTransition(duration, inScene, rows);
	}
	
	protected SplitRowsTransition(float duration, Scene inScene, int rows) {
		nativeInit(duration, inScene, rows);
    }
	
    /**
     * 从底层指针获得一个SplitRowsTransition的Java对象
     * 
     * @param pointer 底层指针
     * @return {@link SplitRowsTransition}
     */
    public static SplitRowsTransition from(int pointer) {
    	return pointer == 0 ? null : new SplitRowsTransition(pointer);
    }
    
    protected SplitRowsTransition(int pointer) {
    	super(pointer);
    }
	
	private native void nativeInit(float duration, Scene inScene, int rows);
}
