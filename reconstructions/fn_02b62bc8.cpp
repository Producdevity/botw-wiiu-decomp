#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486254;
extern "C" RuntimeTag data_10486510;
extern "C" const RuntimeVTable data_101afef8;

typedef Token<&data_10486254, &data_10486510, &data_101afef8> DerivedType;

namespace {
struct Base;
typedef bool (*DerivedQuery)(const Base* object, const RuntimeTag* type);

struct Base {
    unsigned char prefix[28];
    void* const* vtable;
};

struct Owner;
typedef Base* (*ComponentGetter)(Owner* owner);

struct Owner {
    unsigned char prefix[232];
    void* const* vtable;
};

inline bool is_derived_from(const Base* object) {
    const RuntimeTag* type = &DerivedType::get();
    return object != 0 && reinterpret_cast<DerivedQuery>(object->vtable[3])(object, type);
}
}
extern "C" Base* fn_02b62bc8(Owner* owner) {
    Base* object = reinterpret_cast<ComponentGetter>(owner->vtable[255])(owner);
    Base* result = is_derived_from(object) ? object : 0;
    return result;
}
