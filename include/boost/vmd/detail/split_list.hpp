#if !defined(BOOST_VMD_DETAIL_SPLIT_LIST_HPP)
#define BOOST_VMD_DETAIL_SPLIT_LIST_HPP

#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/split.hpp>

#define BOOST_VMD_DETAIL_ELEM_SPLIT_LIST(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_SPLIT(BOOST_VMD_ELEM_SPLIT(elem,vseq),BOOST_VMD_TYPE_LIST) \
/**/

#endif /* BOOST_VMD_DETAIL_SPLIT_LIST_HPP */
