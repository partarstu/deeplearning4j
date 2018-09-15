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
// @author Yurii Shyrma (iuriish@yahoo.com), created on 1.08.2018
//

#include <op_boilerplate.h>
#if NOT_EXCLUDED(OP_scatter_min)

#include <ops/declarable/CustomOperations.h>
#include <ops/declarable/generic/helpers/ScatterHelper.HHH>

namespace nd4j {
namespace ops {

OP_IMPL(scatter_min, 3, 1, true) {

    auto input = INPUT_VARIABLE(0);
    auto indices = INPUT_VARIABLE(1);
    auto updates = INPUT_VARIABLE(2);

    auto output = OUTPUT_VARIABLE(0);

        // FIXME: scatter helper should be updated
    /*
    const int inRank  = input->rankOf();
    const int indRank = indices->rankOf();
    const int updRank = updates->rankOf();
    
    REQUIRE_TRUE(inRank > 0, 0, "SCATTER_MIN OP: input should not be scalar !");
    
    if(inRank == 1) {
        REQUIRE_TRUE(indices->isSameShape(updates), 0, "SCATTER_MIN OP: when input array has rank = 1 then indices and updates must have the same shapes, but got %s and %s correspondingly !", ShapeUtils::shapeAsString(indices).c_str(), ShapeUtils::shapeAsString(updates).c_str());
    }
    else if (inRank == updRank && indices->isVector()) {

        std::vector<Nd4jLong> updShape = updates->getShapeAsVector();
        std::vector<Nd4jLong> inShape  = input->getShapeAsVector();
        std::vector<Nd4jLong> expectedUpdShape = {indices->lengthOf()}; 
        expectedUpdShape.insert(expectedUpdShape.end(), inShape.begin()+1, inShape.end());
        
        REQUIRE_TRUE(expectedUpdShape == updShape, 0, "SCATTER_MIN OP: wrong shape of updates array, expected is %s, but got %s instead !", ShapeUtils::shapeAsString(expectedUpdShape).c_str(), ShapeUtils::shapeAsString(updShape).c_str());
    }
    else {
        
        REQUIRE_TRUE(updRank == indRank + inRank - 1, 0, "SCATTER_MIN OP: wrong rank of updates array, expected is %i, but got %i instead !", indRank + inRank - 1 , updRank);
                
        std::vector<Nd4jLong> updShape = updates->getShapeAsVector();
        std::vector<Nd4jLong> inShape  = input->getShapeAsVector();
        std::vector<Nd4jLong> expectedUpdShape = indices->getShapeAsVector();        
        expectedUpdShape.insert(expectedUpdShape.end(), inShape.begin()+1, inShape.end());
        
        REQUIRE_TRUE(expectedUpdShape == updShape, 0, "SCATTER_MIN OP: wrong shape of updates array, expected is %s, but got %s instead !", ShapeUtils::shapeAsString(expectedUpdShape).c_str(), ShapeUtils::shapeAsString(updShape).c_str());
    }

    if (!block.isInplace())
            output->assign(input);

    ScatterHelper<T>::template scatter<simdOps::Min<T>>(*indices, *updates, *output);
*/
    return Status::OK();
}
DECLARE_SYN(ScatterMin, scatter_min);

}
}

#endif