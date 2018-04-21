#include <iostream>

#include <glog/logging.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "hub/db/db.h"

int main(int argc, char** argv) {
  google::InstallFailureSignalHandler();
  google::InitGoogleLogging("commands-tests");
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  testing::InitGoogleMock(&argc, argv);

  hub::db::FLAGS_db = ":memory:";

  return RUN_ALL_TESTS();
}


