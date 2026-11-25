struct Opaque_03b9b7b4 {
    unsigned char padding_0[4];
    unsigned int value;
};

struct AssetCallTable {
    unsigned char unknown_00[24];
    unsigned int paramStartPos;
};

struct StringEntryTable;
struct Accessor;
extern "C" int fn_03b97cbc(Accessor* self, const AssetCallTable* assetCallTable, const char* name, ...);
extern "C" const void* fn_03b97c28(Accessor* self, unsigned int paramStartPos, int index);
extern "C" const char* fn_03b97e5c(Accessor* self, const void* param);
extern "C" const char* fn_03b970d4(const StringEntryTable* table, unsigned int index);
extern "C" unsigned int fn_03b9b7b4(const Opaque_03b9b7b4* object);
extern "C" const char data_103c5e64[];
extern "C" const char data_103c5e68[];

struct Accessor {
    unsigned char unknown_00[8];
    const Opaque_03b9b7b4* system;

    const char* getValue(const char* name, const AssetCallTable* assetCallTable, int index,
                         const char* fallback) {
        if (fn_03b97cbc(this, assetCallTable, name) == 0) {
            return fallback;
        }
        const void* param = fn_03b97c28(this, assetCallTable->paramStartPos, index);
        if (param != 0) {
            return fn_03b97e5c(this, param);
        }
        return fn_03b970d4(reinterpret_cast<const StringEntryTable*>(fn_03b9b7b4(system)), index);
    }
};

extern "C" const char* fn_03b8f544(Accessor* self, const AssetCallTable* assetCallTable) {
    return self->getValue(data_103c5e68, assetCallTable, 2, data_103c5e64);
}
