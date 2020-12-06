#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    char                         isMonster;
    std::vector< char >          vec;
    for (std::list< Human >::reverse_iterator it = people.rbegin(); it != people.rend(); ++it) {
        it->birthday();
        (!it->isMonster()) ? isMonster = 'y' : isMonster = 'n';
        vec.emplace_back(isMonster);
    }
    return vec;
}
