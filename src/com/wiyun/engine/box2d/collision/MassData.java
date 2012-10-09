package com.wiyun.engine.box2d.collision;

import com.wiyun.engine.types.WYPoint;

/**
 * This holds the mass data computed for a shape.
 */
public class MassData {
	/**
	 * The mass of the shape, usually in kilograms.
	 */
	public float mass;

	/**
	 * The position of the shape's centroid relative to the shape's origin.
	 */
	public WYPoint center = WYPoint.makeZero();

	/**
	 * The rotational inertia of the shape about the local origin.
	 */
	public float I;
}
