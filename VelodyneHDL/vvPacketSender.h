// Copyright 2013 Velodyne Acoustics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <string>
#include <vtkSystemIncludes.h>

class vtkPacketFileReader;

class VTK_EXPORT vvPacketSender
{
public:
  vvPacketSender(std::string pcapfile,
                 std::string destinationio = "127.0.0.1",
                 int port = 2368);
  ~vvPacketSender();

  void pumpPacket();
  bool done() const;
  size_t packetCount() const;

private:
  class vvInternal;
  vvInternal* Internal;

};