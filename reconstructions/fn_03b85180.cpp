#include "botw/float_entry_table.h"

struct Opaque_03b9b7b4 {
    unsigned char padding_0[4];
    unsigned int value;
};

struct AssetCallTable {
    unsigned char unknown_00[24];
    unsigned int paramStartPos;
};

struct Accessor;
extern "C" int fn_03b97cbc(Accessor* self, const AssetCallTable* assetCallTable, const char* name, ...);
extern "C" const void* fn_03b97c28(Accessor* self, unsigned int paramStartPos, int index);
extern "C" int fn_03b9806c(Accessor* self, const void* param);
extern "C" int fn_03b97080(const FloatEntryTable* table, unsigned int index);
extern "C" unsigned int fn_03b9b7b4(const Opaque_03b9b7b4* object);
extern "C" const char data_103c54f4[];

struct Accessor {
    unsigned char unknown_00[8];
    const Opaque_03b9b7b4* system;

    int getValue(const char* name, const AssetCallTable* assetCallTable, int index, int fallback) {
        if (fn_03b97cbc(this, assetCallTable, name) == 0) {
            return fallback;
        }
        const void* param = fn_03b97c28(this, assetCallTable->paramStartPos, index);
        if (param != 0) {
            int result = fn_03b9806c(this, param);
            return result;
        }
        return fn_03b97080(reinterpret_cast<const FloatEntryTable*>(fn_03b9b7b4(system)), index);
    }
};

extern "C" int fn_03b85180(Accessor* self, const AssetCallTable* assetCallTable) {
    return self->getValue(data_103c54f4, assetCallTable, 10, 0);
}
