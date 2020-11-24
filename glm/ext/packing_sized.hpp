/// @ref ext_packing
/// @file glm/ext/packing.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_packing GLM_EXT_packing
/// @ingroup ext
///
/// Include <glm/ext/packing.hpp> to use the features of this extension.
///
/// This extension provides a set of function to convert vertors to packed
/// formats.

#pragma once

// Dependency:
#include "../packing.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_packing extension included")
#endif

namespace glm
{
	/// @addtogroup ext_packing
	/// @{

	/// Returns an unsigned integer obtained by converting the components of a four-component signed integer vector
	/// to the 10-10-10-2-bit signed integer representation found in the OpenGL Specification,
	/// and then packing these four values into a 32-bit unsigned integer.
	/// The first vector component specifies the 10 least-significant bits of the result;
	/// the forth component specifies the 2 most-significant bits.
	///
	/// @see gtc_packing
	/// @see uint32 packI3x10_1x2(uvec4 const& v)
	/// @see uint32 packSnorm3x10_1x2(vec4 const& v)
	/// @see uint32 packUnorm3x10_1x2(vec4 const& v)
	/// @see ivec4 unpackI3x10_1x2(uint32 const& p)
	GLM_FUNC_DECL uint32 packI3x10_1x2(ivec4 const& v);

	/// Unpacks a single 32-bit unsigned integer p into three 10-bit and one 2-bit signed integers.
	///
	/// The first component of the returned vector will be extracted from the least significant bits of the input;
	/// the last component will be extracted from the most significant bits.
	///
	/// @see gtc_packing
	/// @see uint32 packU3x10_1x2(uvec4 const& v)
	/// @see vec4 unpackSnorm3x10_1x2(uint32 const& p);
	/// @see uvec4 unpackI3x10_1x2(uint32 const& p);
	GLM_FUNC_DECL ivec4 unpackI3x10_1x2(uint32 p);

	/// Returns an unsigned integer obtained by converting the components of a four-component unsigned integer vector
	/// to the 10-10-10-2-bit unsigned integer representation found in the OpenGL Specification,
	/// and then packing these four values into a 32-bit unsigned integer.
	/// The first vector component specifies the 10 least-significant bits of the result;
	/// the forth component specifies the 2 most-significant bits.
	///
	/// @see gtc_packing
	/// @see uint32 packI3x10_1x2(ivec4 const& v)
	/// @see uint32 packSnorm3x10_1x2(vec4 const& v)
	/// @see uint32 packUnorm3x10_1x2(vec4 const& v)
	/// @see ivec4 unpackU3x10_1x2(uint32 const& p)
	GLM_FUNC_DECL uint32 packU3x10_1x2(uvec4 const& v);

	/// Unpacks a single 32-bit unsigned integer p into three 10-bit and one 2-bit unsigned integers.
	///
	/// The first component of the returned vector will be extracted from the least significant bits of the input;
	/// the last component will be extracted from the most significant bits.
	///
	/// @see gtc_packing
	/// @see uint32 packU3x10_1x2(uvec4 const& v)
	/// @see vec4 unpackSnorm3x10_1x2(uint32 const& p);
	/// @see uvec4 unpackI3x10_1x2(uint32 const& p);
	GLM_FUNC_DECL uvec4 unpackU3x10_1x2(uint32 p);


	/// Convert each component from an integer vector into a packed integer.
	///
	/// @see gtc_packing
	/// @see i8vec2 unpackInt2x8(int16 p)
	GLM_FUNC_DECL int16 packInt2x8(i8vec2 const& v);

	/// Convert a packed integer into an integer vector.
	///
	/// @see gtc_packing
	/// @see int16 packInt2x8(i8vec2 const& v)
	GLM_FUNC_DECL i8vec2 unpackInt2x8(int16 p);

	/// Convert each component from an integer vector into a packed unsigned integer.
	///
	/// @see gtc_packing
	/// @see u8vec2 unpackInt2x8(uint16 p)
	GLM_FUNC_DECL uint16 packUint2x8(u8vec2 const& v);

	/// Convert a packed integer into an integer vector.
	///
	/// @see gtc_packing
	/// @see uint16 packInt2x8(u8vec2 const& v)
	GLM_FUNC_DECL u8vec2 unpackUint2x8(uint16 p);

	/// Convert each component from an integer vector into a packed integer.
	///
	/// @see gtc_packing
	/// @see i8vec4 unpackInt4x8(int32 p)
	GLM_FUNC_DECL int32 packInt4x8(i8vec4 const& v);

	/// Convert a packed integer into an integer vector.
	///
	/// @see gtc_packing
	/// @see int32 packInt2x8(i8vec4 const& v)
	GLM_FUNC_DECL i8vec4 unpackInt4x8(int32 p);

	/// Convert each component from an integer vector into a packed unsigned integer.
	///
	/// @see gtc_packing
	/// @see u8vec4 unpackUint4x8(uint32 p)
	GLM_FUNC_DECL uint32 packUint4x8(u8vec4 const& v);

	/// Convert a packed integer into an integer vector.
	///
	/// @see gtc_packing
	/// @see uint32 packUint4x8(u8vec2 const& v)
	GLM_FUNC_DECL u8vec4 unpackUint4x8(uint32 p);

	/// Convert each component from an integer vector into a packed integer.
	///
	/// @see gtc_packing
	/// @see i16vec2 unpackInt2x16(int p)
	GLM_FUNC_DECL int packInt2x16(i16vec2 const& v);

	/// Convert a packed integer into an integer vector.
	///
	/// @see gtc_packing
	/// @see int packInt2x16(i16vec2 const& v)
	GLM_FUNC_DECL i16vec2 unpackInt2x16(int p);

	/// Convert each component from an integer vector into a packed integer.
	///
	/// @see gtc_packing
	/// @see i16vec4 unpackInt4x16(int64 p)
	GLM_FUNC_DECL int64 packInt4x16(i16vec4 const& v);

	/// Convert a packed integer into an integer vector.
	///
	/// @see gtc_packing
	/// @see int64 packInt4x16(i16vec4 const& v)
	GLM_FUNC_DECL i16vec4 unpackInt4x16(int64 p);

	/// Convert each component from an integer vector into a packed unsigned integer.
	///
	/// @see gtc_packing
	/// @see u16vec2 unpackUint2x16(uint p)
	GLM_FUNC_DECL uint packUint2x16(u16vec2 const& v);

	/// Convert a packed integer into an integer vector.
	///
	/// @see gtc_packing
	/// @see uint packUint2x16(u16vec2 const& v)
	GLM_FUNC_DECL u16vec2 unpackUint2x16(uint p);

	/// Convert each component from an integer vector into a packed unsigned integer.
	///
	/// @see gtc_packing
	/// @see u16vec4 unpackUint4x16(uint64 p)
	GLM_FUNC_DECL uint64 packUint4x16(u16vec4 const& v);

	/// Convert a packed integer into an integer vector.
	///
	/// @see gtc_packing
	/// @see uint64 packUint4x16(u16vec4 const& v)
	GLM_FUNC_DECL u16vec4 unpackUint4x16(uint64 p);

	/// Convert each component from an integer vector into a packed integer.
	///
	/// @see gtc_packing
	/// @see i32vec2 unpackInt2x32(int p)
	GLM_FUNC_DECL int64 packInt2x32(i32vec2 const& v);

	/// Convert a packed integer into an integer vector.
	///
	/// @see gtc_packing
	/// @see int packInt2x16(i32vec2 const& v)
	GLM_FUNC_DECL i32vec2 unpackInt2x32(int64 p);

	/// Convert each component from an integer vector into a packed unsigned integer.
	///
	/// @see gtc_packing
	/// @see u32vec2 unpackUint2x32(int p)
	GLM_FUNC_DECL uint64 packUint2x32(u32vec2 const& v);

	/// Convert a packed integer into an integer vector.
	///
	/// @see gtc_packing
	/// @see int packUint2x16(u32vec2 const& v)
	GLM_FUNC_DECL u32vec2 unpackUint2x32(uint64 p);

	/// @}
}// namespace glm

#include "packing.inl"
