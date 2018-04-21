#include <gflags/gflags.h>
#include <glog/logging.h>

#include "server/server.h"

int main(int argc, char **argv) {
  google::InstallFailureSignalHandler();

  auto programName = argc && argv && argc > 0 ? argv[0] : "unknown";
  google::InitGoogleLogging(programName);
  gflags::ParseCommandLineFlags(&argc, &argv, false);

  LOG(INFO) << "Hub starting up.";

  hub::HubServer server;

  server.initialise();
  server.runAndWait();
}
