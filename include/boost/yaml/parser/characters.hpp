/**
 *   Copyright (C) 2017 T. Zachary Laine
 *
 *   Distributed under the Boost Software License, Version 1.0. (See
 *   accompanying file LICENSE_1_0.txt or copy at
 *   http://www.boost.org/LICENSE_1_0.txt)
 */

#ifndef BOOST_YAML_PARSER_CHARACTERS_HPP
#define BOOST_YAML_PARSER_CHARACTERS_HPP

#include <boost/yaml/parser/parser_fwd.hpp>


namespace boost { namespace yaml { namespace parser {

    struct characters_t
    {
        explicit characters_t(bool verbose);

        qi::rule<iterator_t, parsed_uchar_t()> printable;
        qi::rule<iterator_t, parsed_uchar_t()> nb_json;
        qi::rule<iterator_t> bom;
        qi::rule<iterator_t, parsed_uchar_t()> nb_char;
        qi::rule<iterator_t, parsed_uchar_t()> ns_char;
        qi::rule<iterator_t, parsed_uchar_t()> uri_char;
        qi::rule<iterator_t, parsed_uchar_t()> tag_char;
        qi::rule<iterator_t, parsed_uchar_t()> esc_char;
    };

}}}

#if BOOST_YAML_HEADER_ONLY
#include <boost/yaml/parser/characters_def.hpp>
#endif

#endif
