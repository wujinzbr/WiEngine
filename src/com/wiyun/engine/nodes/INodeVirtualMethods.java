package com.wiyun.engine.nodes;

/**
 * 由于WiEngine 2.0是用C++实现的，Java端基本只是一个包装，因此想在
 * Java端的子类中覆盖native端父类的方法会有些麻烦。这个接口主要就是
 * 为了让java端通知native端使用java端的实现，这样java端的子类也可以
 * 实现一些父类的方法。
 * 
 * 这里只包含了wyNode子类中最经常被覆盖的几个方法，目前还没有包含wyNode类
 * 所有的虚函数。
 */
public interface INodeVirtualMethods {
	/**
	 * 当节点要变成活动态时，该方法被调用。当该方法被调用时，native层的wyNode.onEnter()
	 * 已经被调用。
	 */
	public void jOnEnter();

	/**
	 * 当节点所属场景退出时该方法被调用，当该方法被调用时，native层的wyNode.onExit()
	 * 已经被调用。
	 */
	public void jOnExit(); 
	
	/**
	 * 当节点所属场景切换完成时该方法被调用, 当该方法被调用时，native层的wyNode.onEnterTransitionDidFinish()
	 * 已经被调用。
	 */
	public void jOnEnterTransitionDidFinish();
	
	/**
	 * 执行该节点的渲染。子类需要实现这个方法。这个方法调用时，坐标系会被转换到节点
	 * 自身坐标系，即(0, 0)代表节点左下角。
	 * 
	 * 如果要覆盖draw，务必还需要调用Node.setNoDraw(true)禁止native层的渲染。
	 */
	public void jDraw();
}
