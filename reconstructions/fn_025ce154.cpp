#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048bd8c;
extern "C" RuntimeTag data_1048bd90;
extern "C" const RuntimeVTable data_100ee3d8;
extern "C" unsigned data_1048bd84;
extern "C" RuntimeTag data_1048bd88;
extern "C" const RuntimeVTable data_100ee3b8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100ee3a8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ee398;

typedef Pointer<&data_1048bd8c, &data_1048bd90, &data_100ee3d8> Type0;
typedef Pointer<&data_1048bd84, &data_1048bd88, &data_100ee3b8> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100ee3a8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100ee398> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_025ce154(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
