#ifndef HTTPSERVER_H
#define HTTPSERVER_H

#include <atomic>
#include <boost/asio/ip/tcp.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <boost/config.hpp>
#include <iostream>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <memory>
#include <optional>
#include <string>
#include <boost/thread.hpp>

#include "http_handler.h"

namespace httpserver
{
namespace beast = boost::beast;         // from <boost/beast.hpp>
namespace http  = beast::http;          // from <boost/beast/http.hpp>
namespace net   = boost::asio;          // from <boost/asio.hpp>
using tcp       = boost::asio::ip::tcp; // from <boost/asio/ip/tcp.hpp>

int run(char* address_,
        unsigned short   port,
        http_handler*    handler,
        unsigned short   max_thread_count);

}

#endif // HTTPSERVER_H