#ifndef BOTW_BYAML_ITER_H
#define BOTW_BYAML_ITER_H

// BYML node reader. A node value is one word plus its node type byte
// (0xD0 bool, 0xD2 float).
struct ByamlIter;

struct ByamlData {
    unsigned value;
    unsigned char type;
};
typedef char ByamlDataSize[sizeof(ByamlData) == 8 ? 1 : -1];

extern "C" void* fn_0396cf14(void* context);
extern "C" bool fn_0396c0c0(const ByamlIter* iter, ByamlData* data, const char* key);
extern "C" bool fn_0396c5dc(const ByamlIter* iter, float* value, const ByamlData* data);
extern "C" bool fn_0396c69c(const ByamlIter* iter, bool* value, const ByamlData* data);
extern "C" ByamlData* fn_0396bf1c(ByamlData* dst, const ByamlData* src);
extern "C" bool fn_0396bf60(const ByamlData* data);

#endif
