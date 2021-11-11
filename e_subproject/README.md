## This directory contains codes about sub-project practice.
#### Directory explanation
 - `all_include` contains all headers file (except header only library)
 - `static_lib_1` intends to provide a static library
 - `header_only_lib_2` intends to provide a header-only library
 - `dynamic_lib_3` intends to provide a dynamic library
 - `exe` intends to provide an executable, that linked to those libraries above

#### Intention

 - Every directory has its own CMakeLists.txt file
 - The upper directories call CMakeLists.txt of the lower directories.

