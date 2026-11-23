#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048cee0;
extern "C" RuntimeTag data_1048cee4;
extern "C" const RuntimeVTable data_10132874;
extern "C" unsigned data_1048b4f8;
extern "C" RuntimeTag data_1048b4fc;
extern "C" const RuntimeVTable data_10132864;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10132854;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101327dc;

typedef Pointer<&data_1048cee0, &data_1048cee4, &data_10132874> Type0;
typedef Pointer<&data_1048b4f8, &data_1048b4fc, &data_10132864> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10132854> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_101327dc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_027cc08c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
