/*
 * $Header: /home/jerenkrantz/tmp/commons/commons-convert/cvs/home/cvs/jakarta-commons//httpclient/src/java/org/apache/commons/httpclient/methods/multipart/ByteArrayPartSource.java,v 1.7 2004/04/18 23:51:37 jsdever Exp $
 * $Revision: 480424 $
 * $Date: 2006-11-29 06:56:49 +0100 (Wed, 29 Nov 2006) $
 *
 * ====================================================================
 *
 *  Licensed to the Apache Software Foundation (ASF) under one or more
 *  contributor license agreements.  See the NOTICE file distributed with
 *  this work for additional information regarding copyright ownership.
 *  The ASF licenses this file to You under the Apache License, Version 2.0
 *  (the "License"); you may not use this file except in compliance with
 *  the License.  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 * ====================================================================
 *
 * This software consists of voluntary contributions made by many
 * individuals on behalf of the Apache Software Foundation.  For more
 * information on the Apache Software Foundation, please see
 * <http://www.apache.org/>.
 *
 */

/*
 * Copyright (c) 2010 WiYun Inc.
 * Author: luma(stubma@gmail.com)
 *
 * For all entities this program is free software; you can redistribute
 * it and/or modify it under the terms of the 'WiEngine' license with
 * the additional provision that 'WiEngine' must be credited in a manner
 * that can be be observed by end users, for example, in the credits or during
 * start up. (please find WiEngine logo in sdk's logo folder)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
package com.wiyun.engine.network;

import java.io.ByteArrayInputStream;
import java.io.InputStream;

/**
 * A PartSource that reads from a byte array.  This class should be used when
 * the data to post is already loaded into memory.
 * 
 * @author <a href="mailto:becke@u.washington.edu">Michael Becke</a>
 *   
 * @since 2.0 
 */
public class ByteArrayPartSource implements PartSource {
    /** Name of the source file. */
    private String fileName;

    /** Byte array of the source file. */
    private byte[] bytes;

    /**
     * Constructor for ByteArrayPartSource.
     * 
     * @param fileName the name of the file these bytes represent
     * @param bytes the content of this part
     */
    public ByteArrayPartSource(String fileName, byte[] bytes) {
        this.fileName = fileName;
        this.bytes = bytes;

    }

    /**
     * @see PartSource#getLength()
     */
    public long getLength() {
        return bytes.length;
    }

    /**
     * @see PartSource#getFileName()
     */
    public String getFileName() {
        return fileName;
    }

    /**
     * @see PartSource#createInputStream()
     */
    public InputStream createInputStream() {
        return new ByteArrayInputStream(bytes);
    }
}
