let makeChildren children => {
  ReasonReact.createDomElement "div" props::(Js.Obj.empty ()) children;
};
