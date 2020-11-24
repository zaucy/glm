/// @ref ext_vector_packing
/// @file glm/ext/vector_packing.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_vector_packing GLM_EXT_vector_packing
/// @ingroup ext
///
/// Include <glm/ext/vector_packing.hpp> to use the features of this extension.
///
/// This extension provides a set of function to convert vectors to packed
/// formats.

#pragma once

// Dependency:
#include "../detail/qualifier.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_vector_packing extension included")
#endif

namespace glm
{
	/// Convert each component of the normalized floating-point vector into unsigned integer values.
	///
	/// @see gtc_packing
	/// @see vec<L, floatType, Q> unpackUnorm(vec<L, intType, Q> const& p);
	template<typename uintType, length_t L, typename floatType, qualifier Q>
	GLM_FUNC_DECL void packUnorm(vec<L, floatType, Q> const& vector, vec<L, uintType, Q>& packed);

	/// Convert a packed integer to a normalized floating-point vector.
	///
	/// @see gtc_packing
	/// @see vec<L, intType, Q> packUnorm(vec<L, floatType, Q> const& v)
	template<typename floatType, length_t L, typename uintType, qualifier Q>
	GLM_FUNC_DECL void unpackUnorm(vec<L, uintType, Q> const& packed, vec<L, floatType, Q>& vector);




	/// Convert each component of the normalized floating-point vector into unsigned integer values.
	///
	/// @see gtc_packing
	/// @see vec<L, floatType, Q> unpackUnorm(vec<L, intType, Q> const& p);
	template<typename uintType, length_t L, typename floatType, qualifier Q>
	GLM_FUNC_DECL vec<L, uintType, Q> packUnorm(vec<L, floatType, Q> const& vector);

	/// Convert a packed integer to a normalized floating-point vector.
	///
	/// @see gtc_packing
	/// @see vec<L, intType, Q> packUnorm(vec<L, floatType, Q> const& v)
	template<typename floatType, length_t L, typename uintType, qualifier Q>
	GLM_FUNC_DECL vec<L, floatType, Q> unpackUnorm(vec<L, uintType, Q> const& packed);

	/// Convert each component of the normalized floating-point vector into signed integer values.
	///
	/// @see gtc_packing
	/// @see vec<L, floatType, Q> unpackSnorm(vec<L, intType, Q> const& p);
	template<typename intType, length_t L, typename floatType, qualifier Q>
	GLM_FUNC_DECL vec<L, intType, Q> packSnorm(vec<L, floatType, Q> const& vector);

	/// Convert a packed integer to a normalized floating-point vector.
	///
	/// @see gtc_packing
	/// @see vec<L, intType, Q> packSnorm(vec<L, floatType, Q> const& v)
	template<typename floatType, length_t L, typename intType, qualifier Q>
	GLM_FUNC_DECL vec<L, floatType, Q> unpackSnorm(vec<L, intType, Q> const& packed);

	/// @addtogroup ext_vector_packing
	/// @{
	/// Returns an unsigned integer vector obtained by converting the components of a floating-point vector
	/// to the 16-bit floating-point representation found in the OpenGL Specification.
	/// The first vector component specifies the 16 least-significant bits of the result;
	/// the forth component specifies the 16 most-significant bits.
	///
	/// @see gtc_packing
	/// @see vec<L, float, Q> unpackHalf(vec<L, uint16, Q> const& p)
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	template<length_t L, qualifier Q>
	GLM_FUNC_DECL vec<L, uint16, Q> packHalf(vec<L, float, Q> const& vector);

	/// Returns a floating-point vector with components obtained by reinterpreting an integer vector as 16-bit floating-point numbers and converting them to 32-bit floating-point values.
	/// The first component of the vector is obtained from the 16 least-significant bits of v;
	/// the forth component is obtained from the 16 most-significant bits of v.
	///
	/// @see gtc_packing
	/// @see vec<L, uint16, Q> packHalf(vec<L, float, Q> const& v)
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.4 Floating-Point Pack and Unpack Functions</a>
	template<length_t L, qualifier Q>
	GLM_FUNC_DECL vec<L, float, Q> unpackHalf(vec<L, uint16, Q> const& packed);

	/// @}
}// namespace glm

#include "vector_packing.inl"
