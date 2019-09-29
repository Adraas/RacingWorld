/*
 * Copyright 2018 Vladimir Balun
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
 */

#pragma once

#include <string>

namespace Core { namespace Resources {

    class Sound;

}}

namespace Core { namespace Resources { namespace Loaders {

    class WAVLoader
    {
    public:
        static bool load(Sound& sound, const std::string& sound_file_path, bool streaming = false) noexcept;
    };

    class MP3Loader
    {
    public:
        static bool load(Sound& sound, const std::string& sound_file_path, bool streaming = false) noexcept;
    };

    class OGGLoader
    {
    public:
        static bool load(Sound& sound, const std::string& sound_file_path, bool streaming = false) noexcept;
    };

}}}