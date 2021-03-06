#ifndef CPPLUA_DEF_H
#define CPPLUA_DEF_H

#include <string>

#define CPPLUA_NS       cpplua
#define CPPLUA_NS_BEGIN namespace cpplua {
#define CPPLUA_NS_END   }

// exports
CPPLUA_NS_BEGIN

using string_t = std::string; // shared with same value

using object_id_t = uintptr_t;
constexpr object_id_t INVALID_OBJECT_ID = 0;

CPPLUA_NS_END

#endif
