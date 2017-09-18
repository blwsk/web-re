open Next;

let component = ReasonReact.statelessComponent "Layout";

let make children => {
  let childNode = MakeChildren.makeChildren children;

  {
    ...component,
    render: fun _self => {
      <div className="layout">
        childNode
        <StyledJsx
          global=true
          css=("
            html {
              background: black;
            }
          ")
        />
      </div>
    }
  }
};
