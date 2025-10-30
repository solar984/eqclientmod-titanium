#pragma once

#define ModAssetDir(filename) ("eqclientmod-assets/" filename)
void AddFileMapEntry(const char *filename, const char *redirect);
void RemoveFileMapEntry(const char *filename);
