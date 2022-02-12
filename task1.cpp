#include <sys/types.h>
#include <unistd.h>
#include <iostream>

using namespace std;
int main()
{
  uid_t uid = getuid();
  gid_t gid = getgid();
  pid_t pid = getpid();
  pid_t ppid = getppid();
  cout << "UID: " << uid << " GID: " << gid << " PID: "<< pid << " PPID: " << ppid <<endl;
  return 0;
}
