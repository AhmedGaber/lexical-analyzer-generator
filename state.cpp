#include "state.h"
#include <iostream>

state::state() {

}

void state::connect(char x, state* dest) {
  next.insert(make_pair(x, dest));
  multimap<char, state*>::iterator it = next.begin();
}

void state::set_acceptence(bool is_acceptence) {
  this->is_acceptence = is_acceptence;
  if (is_acceptence == false) {
    this->token_type = "";
  }
}

bool state::get_acceptence() {
  return is_acceptence;
}

void state::set_token_type(string tk) {
  this->token_type = tk;
  if (tk == "") {
    this->is_acceptence = false;
  }
}

string state::get_token_type() {
  return token_type;
}

multimap<char, state*> state::get_neighbors() {
  return next;
}
