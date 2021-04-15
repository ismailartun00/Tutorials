#pragma once
#include <iostream>

struct Interface{
   std::ostream& operator<<(std::ostream&, const Account&) = 0;
};