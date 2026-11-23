#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048c514;
extern "C" RuntimeTag data_1048c518;
extern "C" const RuntimeVTable data_1010c790;
extern "C" unsigned data_1048c33c;
extern "C" RuntimeTag data_1048c340;
extern "C" const RuntimeVTable data_1010c780;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1010c770;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1010c760;

typedef Pointer<&data_1048c514, &data_1048c518, &data_1010c790> Type0;
typedef Pointer<&data_1048c33c, &data_1048c340, &data_1010c780> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_1010c770> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1010c760> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_026a15a4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
