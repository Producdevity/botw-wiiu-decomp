#ifndef BOTW_ACTION_STATIC_PARAM_H
#define BOTW_ACTION_STATIC_PARAM_H

// AI action static-parameter lookups. action: actor pointer at +0, definition
// index (s16) at +8, vtable at +12 whose slot at +220 returns the definition
// type. key is a string descriptor {text, vtable}. Each variant forwards to a
// different typed lookup and returns whether the key was found.
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

namespace action_static_param {
struct Definition {
    unsigned char storage[104];
};

struct DefinitionBuffer {
    unsigned int count;
    const Definition* data;
};

struct ActorParam {
    unsigned char storage[116];
    const void* program;
};

struct Actor {
    unsigned char storage[924];
    const ActorParam* param;
};

struct Action;
typedef int (*TypeMethod)(const Action*);

struct ActionTable {
    unsigned char prefix[220];
    TypeMethod get_type;
};

struct Action {
    const Actor* actor;
    unsigned char storage[4];
    short definition_index;
    const ActionTable* table;
};
}

extern "C" const action_static_param::DefinitionBuffer* fn_037751c0(const void* program, int type);

#endif
