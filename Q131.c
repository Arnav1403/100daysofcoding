#include <stdio.h>
int main() {
  enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
const char* dayNames[] = {
"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
};
for (int day = Sunday; day <= Saturday; day++) {
printf("%s = %d\n", dayNames[day], day);
}
return 0;
