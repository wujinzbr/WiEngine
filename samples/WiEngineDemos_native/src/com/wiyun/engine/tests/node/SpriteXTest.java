package com.wiyun.engine.tests.node;

import com.wiyun.engine.WiEngineTestActivity;

public class SpriteXTest extends WiEngineTestActivity {
	private native void nativeStart();

	@Override
	protected void runDemo() {
		nativeStart();
	}
}
