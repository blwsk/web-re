let component = ReasonReact.statelessComponent "UIButton";

let defaultStyle = ReactDOMRe.Style.make color::"black" backgroundColor::"white" border::"1px solid black"();
let primaryStyle = ReactDOMRe.Style.make color::"white" backgroundColor::"blue" border::"1px solid blue"();

let makeStyle = fun use => switch use {
  | Some "primary" => primaryStyle
  | Some "default" => defaultStyle
  | Some _ => defaultStyle
  | None => defaultStyle
};

let make ::use=? ::text ::onClick _children => {
  {
    ...component,
    render: fun _self => {
      <button
        className="bw0 br2 pa3 white fw1 tc tracked"
        onClick={onClick}
        style={makeStyle use} 
      >
        (ReasonReact.stringToElement text)
      </button>
    } 
  }
};
