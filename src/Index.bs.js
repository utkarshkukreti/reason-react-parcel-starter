

import * as Curry from "bs-platform/lib/es6/curry.js";
import * as React from "react";
import * as ReactDom from "react-dom";

function Index$Counter(Props) {
  var match = React.useState((function () {
          return 0;
        }));
  var setCount = match[1];
  var count = match[0];
  return React.createElement("div", undefined, React.createElement("button", {
                  onClick: (function (param) {
                      return Curry._1(setCount, (function (param) {
                                    return count - 1 | 0;
                                  }));
                    })
                }, "-"), " " + (String(count) + " "), React.createElement("button", {
                  onClick: (function (param) {
                      return Curry._1(setCount, (function (param) {
                                    return count + 1 | 0;
                                  }));
                    })
                }, "+"));
}

var Counter = {
  make: Index$Counter
};

ReactDom.render(React.createElement(Index$Counter, { }), document.querySelector("main"));

export {
  Counter ,
  
}
/*  Not a pure module */
