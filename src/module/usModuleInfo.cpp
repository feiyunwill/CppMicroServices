/*=============================================================================

  Library: CppMicroServices

  Copyright (c) German Cancer Research Center,
    Division of Medical and Biological Informatics

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=============================================================================*/


#include "usModuleInfo.h"

US_BEGIN_NAMESPACE

ModuleInfo::ModuleInfo(const std::string& name, const std::string& libName,
                       const std::string& autoLoadDir, const std::string& moduleDeps,
                       const std::string& version)
  : name(name)
  , libName(libName)
  , moduleDeps(moduleDeps)
  , version(version)
  , autoLoadDir(autoLoadDir)
  , id(0)
  , activatorHook(NULL)
{}

US_END_NAMESPACE