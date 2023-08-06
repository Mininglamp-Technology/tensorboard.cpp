// Copyright (c) 2023 Mininglamp Tech. Inc. (Liang Zhao)
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

#ifndef RECORD_WRITER_H_
#define RECORD_WRITER_H_

#include "proto/event.pb.h"

namespace nlptk {

class Writer {
 public:
  Writer();

  virtual ~Writer() = default;

  virtual int Write(tensorboard::Event&& event) = 0;

  virtual int Flush() = 0;

  virtual int Close() = 0;

  virtual int Ready() const;
};

}  // namespace nlptk

#endif  // RECORD_WRITER_H_
