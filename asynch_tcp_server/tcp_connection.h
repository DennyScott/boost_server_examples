class tcp_connection
  : public boost::enable_shared_from_this<tcp_connection>
{
  public:
    typedef boost::shared_ptr<tcp_connection> pointer;

    static pointer create(boost::asio::io_service& io_service)
    {
      return pointer(new tcp_connection(io_service));
    }

    tcp::socket& socket()
    {
      return socket_;
    }

    void start()
    {
      message_ = make_daytime_string();
    }
}
