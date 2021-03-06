/*
 * HLSLKeywords.h
 * 
 * This file is part of the XShaderCompiler project (Copyright (c) 2014-2017 by Lukas Hermanns)
 * See "LICENSE.txt" for license information.
 */

#ifndef XSC_HLSL_KEYWORDS_H
#define XSC_HLSL_KEYWORDS_H


#include "Token.h"
#include "ASTEnums.h"
#include <string>


namespace Xsc
{


/* ----- HLSL Keywords ----- */

// Returns the Keyword-to-Token map for HLSL.
const KeywordMapType& HLSLKeywords();

// Returns the keywords map extension for Cg (i.e. only the additional keywords that are only part of Cg, e.g. "fixed4").
const KeywordMapType& HLSLKeywordsExtCg();


/* ----- DataType Mapping ----- */

// Returns the data type for the specified HLSL keyword or throws an std::runtime_error on failure.
DataType HLSLKeywordToDataType(const std::string& keyword);

// Returns the data type for the specified Cg keyword or throws an std::runtime_error on failure.
DataType HLSLKeywordExtCgToDataType(const std::string& keyword);


/* ----- PrimitiveType Mapping ----- */

// Returns the primitive type for the specified HLSL keyword or throws an std::runtime_error on failure.
PrimitiveType HLSLKeywordToPrimitiveType(const std::string& keyword);


/* ----- StorageClass Mapping ----- */

// Returns the storage class for the specified HLSL keyword or throws an std::runtime_error on failure.
StorageClass HLSLKeywordToStorageClass(const std::string& keyword);


/* ----- InterpModifier Mapping ----- */

// Returns the interpolation modifier for the specified HLSL keyword or throws an std::runtime_error on failure.
InterpModifier HLSLKeywordToInterpModifier(const std::string& keyword);


/* ----- TypeModifier Mapping ----- */

// Returns the type modifier for the specified HLSL keyword or throws an std::runtime_error on failure.
TypeModifier HLSLKeywordToTypeModifier(const std::string& keyword);


/* ----- UniformBufferType Mapping ----- */

// Returns the uniform buffer type for the specified HLSL keyword or throws an std::runtime_error on failure.
UniformBufferType HLSLKeywordToUniformBufferType(const std::string& keyword);


/* ----- BufferType Mapping ----- */

// Returns the buffer type for the specified HLSL keyword or throws an std::runtime_error on failure.
BufferType HLSLKeywordToBufferType(const std::string& keyword);


/* ----- SamplerType Mapping ----- */

// Returns the sampler type for the specified HLSL keyword or throws an std::runtime_error on failure.
SamplerType HLSLKeywordToSamplerType(const std::string& keyword);


/* ----- AttributeType Mapping ----- */

// Returns the HLSL keyword for the specified attribut type or null on failure.
const std::string* AttributeTypeToHLSLKeyword(const AttributeType t);

// Returns the attribute type for the specified HLSL keyword or returns AttributeType::Undefined.
AttributeType HLSLKeywordToAttributeType(const std::string& keyword);


/* ----- AttributeValue Mapping ----- */

// Returns the attribute value for the specified HLSL keyword or returns AttributeValue::Undefined.
AttributeValue HLSLKeywordToAttributeValue(const std::string& keyword);


/* ----- IndexedSemantic Mapping ----- */

// Returns the semantic for the specified identifier or Semantic::UserDefined if the identifier is not reserved.
IndexedSemantic HLSLKeywordToSemantic(const std::string& ident, bool useD3D10Semantics = true);


#ifdef XSC_ENABLE_LANGUAGE_EXT

/* ----- ImageLayoutFormat Mapping ----- */

// Maps a keyword from "layout" attribute extension into an image layout format or returns ImageLayoutFormat::Undefined.
ImageLayoutFormat ExtHLSLKeywordToImageLayoutFormat(const std::string& keyword);

#endif


} // /namespace Xsc


#endif



// ================================================================================