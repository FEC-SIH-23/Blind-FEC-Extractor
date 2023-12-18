# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

major_version = "6"
minor_version = "6"
patch_version = "1"

# For example: "a", "b", "rc"
# (which means "alpha", "beta", "release candidate").
# An empty string means the generated package will be an official release.
release_version_type = ""

# For example: "1", "2" (which means "beta1", "beta2", if type is "b").
pre_release_version = ""

if __name__ == '__main__':
    # Used by CMake.
    print(f'{major_version};{minor_version};{patch_version};'
          f'{release_version_type};{pre_release_version}')
