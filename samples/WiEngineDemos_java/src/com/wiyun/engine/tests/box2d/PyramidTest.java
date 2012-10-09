/*
 * Copyright (c) 2010 WiYun Inc.

 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
package com.wiyun.engine.tests.box2d;

import com.wiyun.engine.WiEngineTestActivity;
import com.wiyun.engine.box2d.collision.EdgeShape;
import com.wiyun.engine.box2d.collision.PolygonShape;
import com.wiyun.engine.box2d.dynamics.Body;
import com.wiyun.engine.box2d.dynamics.BodyDef;
import com.wiyun.engine.nodes.Director;
import com.wiyun.engine.nodes.Layer;
import com.wiyun.engine.types.WYPoint;
import com.wiyun.engine.types.WYSize;
import com.wiyun.engine.utils.TargetSelector;

public class PyramidTest extends WiEngineTestActivity {
	@Override
	protected Layer createLayer() {
		return new MyLayer();
	}

    class MyLayer extends Box2DLayer {
		public MyLayer() {
			int e_count = 15;
			WYSize s = Director.getInstance().getWindowSize();
			
			// set gravity
			mWorld.setGravity(0, -10);

			// place box2d to center of bottom edge
			mBox2D.setPosition(s.width / 2, 0);
			
			{
				BodyDef bd = BodyDef.make();
				Body ground = mWorld.createBody(bd);
				bd.destroy();

				EdgeShape shape = EdgeShape.make();
				shape.setEndpoints(-40.0f, 0.0f, 40.0f, 0.0f);
				ground.createFixture(shape, 0.0f);
			}

			{
				float a = 0.5f;
				PolygonShape shape = PolygonShape.make();
				shape.setAsBox(a, a);

				WYPoint x = WYPoint.make(-7.0f, 0.75f);
				WYPoint y = WYPoint.makeZero();
				WYPoint deltaX = WYPoint.make(0.5625f, 1.25f);
				WYPoint deltaY = WYPoint.make(1.125f, 0.0f);

				for (int i = 0; i < e_count; ++i)
				{
					y = x;

					for (int j = i; j < e_count; ++j)
					{
						BodyDef bd = BodyDef.make();
						bd.setType(Body.TYPE_DYNAMIC);
						bd.setPosition(y);
						Body body = mWorld.createBody(bd);
						body.createFixture(shape, 5.0f);
						bd.destroy();

						y = WYPoint.add(y, deltaY);
					}

					x = WYPoint.add(x, deltaX);
				}
			}
			
			schedule(new TargetSelector(this, "update(float)", new Object[] { 0f }));
		}
    }
}
