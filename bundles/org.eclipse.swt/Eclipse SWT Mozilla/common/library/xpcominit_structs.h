/*******************************************************************************
 * Copyright (c) 2000, 2011 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

#include "xpcominit.h"

#ifndef NO_GREProperty
void cacheGREPropertyFields(JNIEnv *env, jobject lpObject);
GREProperty *getGREPropertyFields(JNIEnv *env, jobject lpObject, GREProperty *lpStruct);
void setGREPropertyFields(JNIEnv *env, jobject lpObject, GREProperty *lpStruct);
#define GREProperty_sizeof() sizeof(GREProperty)
#else
#define cacheGREPropertyFields(a,b)
#define getGREPropertyFields(a,b,c) NULL
#define setGREPropertyFields(a,b,c)
#define GREProperty_sizeof() 0
#endif

#ifndef NO_GREVersionRange
void cacheGREVersionRangeFields(JNIEnv *env, jobject lpObject);
GREVersionRange *getGREVersionRangeFields(JNIEnv *env, jobject lpObject, GREVersionRange *lpStruct);
void setGREVersionRangeFields(JNIEnv *env, jobject lpObject, GREVersionRange *lpStruct);
#define GREVersionRange_sizeof() sizeof(GREVersionRange)
#else
#define cacheGREVersionRangeFields(a,b)
#define getGREVersionRangeFields(a,b,c) NULL
#define setGREVersionRangeFields(a,b,c)
#define GREVersionRange_sizeof() 0
#endif

