/**
 * (c) 2015 Alexandro Sanchez Bach. All rights reserved.
 * Released under GPL v2 license. Read LICENSE for more details.
 */

#pragma once

#include "nucleus/common.h"
#include "nucleus/filesystem/device.h"
#include "nucleus/filesystem/directory.h"
#include "nucleus/filesystem/file.h"
#include "nucleus/filesystem/path.h"

// Devices
#include "device/host_path/host_path_device.h"
#include "device/iso_container/iso_container_device.h"

#include <string>
#include <vector>

namespace fs {

class VirtualFileSystem {
    std::vector<IDevice*> devices;

    // Find an appropriate device to handle the given path
    IDevice* getDevice(const Path& path);
    
public:
    bool registerDevice(IDevice* device);

    File* openFile(const Path& path, OpenMode mode);
    bool createFile(const Path& path);
    bool existsFile(const Path& path);
    bool removeFile(const Path& path);

    IDir* openDir(const Path& path);
    bool existsDir(const Path& path);
    bool removeDir(const Path& path);

    File::Attributes getFileAttributes(const Path& path);
};

}  // namespace fs
