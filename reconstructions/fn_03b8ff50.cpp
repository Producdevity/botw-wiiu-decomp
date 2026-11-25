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
extern "C" float fn_03b98990(Accessor* self, const void* param, const void* userInstance);
extern "C" unsigned int fn_03b9b7b4(const Opaque_03b9b7b4* object);
extern "C" const float data_103c5e4c[];
extern "C" const char data_103c5f08[];

struct Accessor {
    unsigned char unknown_00[8];
    const Opaque_03b9b7b4* system;

    float getValue(const char* name, const AssetCallTable* assetCallTable, int index,
                   const void* userInstance) {
        if (fn_03b97cbc(this, assetCallTable, name) == 0) {
            return data_103c5e4c[0];
        }
        const void* param = fn_03b97c28(this, assetCallTable->paramStartPos, index);
        if (param != 0) {
            return fn_03b98990(this, param, userInstance);
        }
        return fn_03b970a8(reinterpret_cast<const FloatEntryTable*>(fn_03b9b7b4(system)), index);
    }
};

extern "C" float fn_03b8ff50(Accessor* self, const AssetCallTable* assetCallTable,
                             const void* userInstance) {
    return self->getValue(data_103c5f08, assetCallTable, 13, userInstance);
}
