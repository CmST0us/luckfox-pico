/*
 * Copyright 2018 Rockchip Electronics Co. LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * author: martin.cheng@rock-chips.com
 *   date: 20180704
 */

#ifndef INCLUDE_RT_BASE_RT_CONFIG_H_
#define INCLUDE_RT_BASE_RT_CONFIG_H_

/*
 * build configurations for windows operation system
 */
#ifdef OS_WINDOWS

#define HAVE_WINDOW_WIN32 1

#endif // OS_WINDOWS

/*
 * build configurations for android operation system
 */
#ifdef OS_ANDROID

#define HAVE_WINDOW_WIN32 0

#endif // OS_ANDROID

#endif // INCLUDE_RT_BASE_RT_CONFIG_H_
