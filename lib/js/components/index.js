// Generated by BUCKLESCRIPT VERSION 1.9.0, PLEASE EDIT WITH CARE
'use strict';

var Block       = require("bs-platform/lib/js/block.js");
var Curry       = require("bs-platform/lib/js/curry.js");
var React       = require("react");
var UIButton    = require("./common/uIButton.js");
var Pervasives  = require("bs-platform/lib/js/pervasives.js");
var ReasonReact = require("reason-react/lib/js/src/reasonReact.js");

var component = ReasonReact.statefulComponent("Index");

function make() {
  var handleClick = function (_, param) {
    var state = param[/* state */3];
    return /* Update */Block.__(0, [/* record */[
                /* count */state[/* count */0] + 1 | 0,
                /* text */state[/* text */1]
              ]]);
  };
  var handleChange = function ($$event, param) {
    var value = $$event.target.value;
    return /* Update */Block.__(0, [/* record */[
                /* count */param[/* state */3][/* count */0],
                /* text */value
              ]]);
  };
  var newrecord = component.slice();
  newrecord[/* render */9] = (function (self) {
      var buttonText = "Clicked me " + (Pervasives.string_of_int(self[/* state */3][/* count */0]) + " times");
      var stringLengthText = "Length of input string: " + Pervasives.string_of_int(self[/* state */3][/* text */1].length);
      return React.createElement("div", undefined, ReasonReact.element(/* None */0, /* None */0, UIButton.make(/* Some */["primary"], buttonText, Curry._1(self[/* update */2], handleClick), /* array */[])), React.createElement("input", {
                      type: "text",
                      value: self[/* state */3][/* text */1],
                      onChange: Curry._1(self[/* update */2], handleChange)
                    }), React.createElement("div", undefined, stringLengthText));
    });
  newrecord[/* initialState */10] = (function () {
      return /* record */[
              /* count */0,
              /* text */""
            ];
    });
  return newrecord;
}

var jsComponent = ReasonReact.wrapReasonForJs(component, (function () {
        return make(/* array */[]);
      }));

exports.component   = component;
exports.make        = make;
exports.jsComponent = jsComponent;
/* component Not a pure module */