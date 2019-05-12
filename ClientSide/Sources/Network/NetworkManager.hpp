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

#include <memory>

#include "UDPConnection.hpp"
#include "Protocol/Protocol.hpp"
#include "Protocol/EPacketType.hpp"
#include "../Utils/Configuration.hpp"

namespace Network {

    class NetworkManager
    {
    public:
        explicit NetworkManager() noexcept
            : m_connection(Configuration::Network::SERVER_ADDRESS, Configuration::Network::SERVER_PORT) {}
        bool login() noexcept;
    private:
        UDPConnection m_connection;
        std::int32_t m_current_token = 0;
        std::int32_t m_packet_number = 1;
    };

}