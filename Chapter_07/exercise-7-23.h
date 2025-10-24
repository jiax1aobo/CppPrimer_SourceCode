#include <iostream>
#include <ostream>
#include <string>
#include <vector>
class Screen {
public:
  friend class Window_mgr; // 友元类可以访问本类的所有成员
  using pos = std::string::size_type;

  Screen() = default;
  Screen(pos h, pos w) : height_(h), width_(w), content_(h * w, ' ') {}
  Screen(pos h, pos w, char c) : height_(h), width_(w), content_(h * w, c) {}

  char get() const { return content_[cursor_]; }
  char get(pos r, pos c) const {
    pos row = width_ * r;
    return content_[row + c];
  }

  Screen &set(char c) {
    content_[cursor_] = c;
    return *this;
  }
  Screen &set(pos r, pos c) {
    content_[r * width_ + c] = c;
    return *this;
  }

  Screen &move(pos r, pos c) {
    cursor_ = width_ * r + c;
    return *this;
  }

  Screen &display(std::ostream &os) {
    do_display(os);
    return *this;
  }
  const Screen &display(std::ostream &os) const {
    do_display(os);
    return *this;
  }

private:
  void do_display(std::ostream &os) const { os << content_; }

private:
  pos height_ = 0, width_ = 0;
  std::string content_;
  pos cursor_ = 0;
};

class Window_mgr {
public:
  using ScreenIdx = std::vector<Screen>::size_type;

  /**
   * @brief
   * 因为 Window_mgr 是 Screen 的友元类
   * 所以 Window_mgr 可以访问 Screen 对象的私有成员
   */
  void clear(ScreenIdx idx) {
    Screen &s = screens_[idx];
    s.content_ = std::string(s.height_ * s.width_, ' ');
  }

  ScreenIdx addScreen(const Screen &s);

private:
  std::vector<Screen> screens_{Screen(24, 80, ' ')};
};

inline Window_mgr::ScreenIdx Window_mgr::addScreen(const Screen &s) {
  screens_.push_back(s);
  return screens_.size() - 1;
}