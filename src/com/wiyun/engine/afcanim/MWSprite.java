package com.wiyun.engine.afcanim;

import com.wiyun.engine.opengl.Texture2D;

/**
 * \if English
 * Motion welder sprite, most logic is encapsulated in parent class and
 * it just provides some methods proprietary to motion welder
 * 
 * \note
 * \link wyMWSprite wyMWSprite\endlink doesn't support clip mapping
 * \else
 * 这个类并不负责解析Motion Welder文件, 但是它封装了存取Motion Welder中动画
 * 数据的逻辑, 可以通过这个类播放Motion Welder中的某个动画.
 * 
 * \note
 * \link wyMWSprite wyMWSprite\endlink不支持分片映射
 * \endif
 */
public class MWSprite extends AFCSprite {
	/**
	 * \if English
	 * Create motion welder sprite from resource id
	 *
	 * @param mwResId resource id of anu file
	 * @param animIndex animation index
	 * @param tex related textures, if more than one, can follow this argument
	 * \else
	 * 从一个anu资源文件中创建\link MWSprite MWSprite\endlink
	 *
	 * @param mwResId anu文件的资源id
	 * @param animIndex 动画索引
	 * @param tex 相关联的\link Texture2D Texture2D\endlink, 后面可以跟可变参数, 方便指定
	 * 		更多关联的\link Texture2D Texture2D\endlink. 
	 * \endif
	 */
	public static MWSprite make(int mwResId, int animIndex, Texture2D... tex) {
		return new MWSprite(mwResId, animIndex, tex);
	}
	
	/**
	 * \if English
	 * Create motion welder sprite from path
	 *
	 * @param path path of anu file
	 * @param isFile true means \c path is an absolute path in file system, false means \c path
	 * 		is relative path under assets
	 * @param animIndex animation index
	 * @param tex related textures, if more than one, can follow this argument
	 * \else
	 * 从一个asset文件或者文件系统中的文件创建\link MWSprite MWSprite\endlink
	 *
	 * @param path anu文件的路径
	 * @param isFile true表示path是一个文件系统路径, 而false表示path是一个assets下的路径
	 * @param animIndex 动画索引
	 * @param tex 相关联的\link Texture2D Texture2D\endlink, 后面可以跟可变参数, 方便指定
	 * 		更多关联的\link Texture2D Texture2D\endlink.
	 * \endif
	 */
	public static MWSprite make(String path, boolean isFile, int animIndex, Texture2D... tex) {
		return new MWSprite(path, isFile, animIndex, tex);
	}
	
	public static MWSprite from(int pointer) {
		return pointer == 0 ? null : new MWSprite(pointer);
	}
	
	protected MWSprite(int mwResId, int animIndex, Texture2D[] tex) {
		nativeInit(mwResId, animIndex, tex);
	}
	
	protected MWSprite(String path, boolean isFile, int animIndex, Texture2D[] tex) {
		nativeInit(path, isFile, animIndex, tex);
	}
	
	protected MWSprite(int pointer) {
		super(pointer);
	}
	
	private native void nativeInit(int mwResId, int animIndex, Texture2D[] tex);
	
	private native void nativeInit(String path, boolean isFile, int animIndex, Texture2D[] tex);
}
