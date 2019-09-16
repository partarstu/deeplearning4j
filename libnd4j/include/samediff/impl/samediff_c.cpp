/*******************************************************************************
 * Copyright (c) 2015-2018 Skymind, Inc.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Apache License, Version 2.0 which is available at
 * https://www.apache.org/licenses/LICENSE-2.0.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 * SPDX-License-Identifier: Apache-2.0
 ******************************************************************************/

//
// @author raver119@gmail.com
//

#include <samediff/samediff_c.h>
#include <samediff/SameDiff.h>

void*  SD_createGraph() {
    return new samediff::SameDiff();
}

void  SD_destroyGraph(void *sd) {
    delete reinterpret_cast<samediff::SameDiff*>(sd);
}

void  SD_execute(void *sd) {

}

void  SD_executePartially(void *sd, const char *nodeName) {

}

// args entity: CRUD
void* SD_createArgs() {
    return nullptr;
}

void  SD_destroyArgs(void* args) {

}

void  SD_addInputArg(void *args, int position, void *variable) {

}

void  SD_addIArg(void *args, int position, Nd4jLong arg) {

}

void  SD_addDArg(void *args, int position, double arg) {

}

void  SD_addBArg(void *args, int position, bool arg) {

}

// node entity: CRUD
void* SD_createNode(void* sd, const char* opName, void *arg, const char* nodeName) {
    return nullptr;
}

// variable entity: CRUD
void* SD_createVariable(void* sd) {
    return nullptr;
}

// tuple entity: CRUD
void* SD_createTuple() {
    return nullptr;
}
