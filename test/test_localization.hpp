/*******************************************************************************
* Copyright 2017-2018 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#pragma once
#include <vector>
#include <string>
#include <opencv2/core/core.hpp>

extern std::vector<std::string> label_list;
std::vector<uint8_t> make_image_from_metadata(const std::string& metadata);
nervana::boundingbox::box
    crop_single_box(nervana::boundingbox::box expected, cv::Rect cropbox, float scale);

void plot(const std::vector<nervana::box>& list, const std::string& prefix);
void plot(const std::string& path);