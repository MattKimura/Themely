// Themely - home menu manager
// Copyright (c) 2017 Erman SAYIN

#pragma once

#include "global.h"
#include "theme.h"

extern string update;
extern int downloading;

Result HTTPGet(vector<char>&, string, string* fileName = NULL, int* progress = NULL);

void checkForUpdate(void*);
void installUpdate();

void downloadThemeFromURL(void*);
