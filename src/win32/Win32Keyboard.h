/*
 * Copyright (C) 2018 Dmitry Kozichev. All rights reserved.
 *
 * Win32Keyboard.h
 * Created on 13 ���. 2019 �.
 */

#pragma once

#include "../Window/MFKeyboard.h"

class Win32Keyboard {
public:

static MFKeyCode keyCodeFromVirtualKey(short);
static short characterVirtualKeyFromKeyCode(MFKeyCode);
};
